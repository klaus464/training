#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int x, y;
} Point;

typedef struct
{
    Point bl;
    Point tr;
    int area;
} Rectangle;

Rectangle rectangle_from_line(int bl_x, int bl_y, int tr_x, int tr_y)
{
    Rectangle rec;
    Point bl = {bl_x, bl_y}, tr = {tr_x, tr_y};
    rec.bl = bl;
    rec.tr = tr;
    rec.area = (max(bl.x, tr.x) - min(bl.x, tr.x)) * (max(bl.y, tr.y) - min(bl.y, tr.y));
    return rec;
}

Rectangle recatangle_from_circle(int x, int y, int r)
{
    Rectangle rec;
    Point bl = {x - r, y - r}, tr = {x + r, y + r};
    rec.bl = bl;
    rec.tr = tr;
    rec.area = (max(bl.x, tr.x) - min(bl.x, tr.x)) * (max(bl.y, tr.y) - min(bl.y, tr.y));
    return rec;
}

Rectangle rectangle_from_points(Point pl[], int limit)
{
    Rectangle rec;
    int min_x = pl[0].x, min_y = pl[0].y, max_x = pl[0].x, max_y = pl[0].y;

    for (int i = 0; i < limit; i++)
    {
        if (pl[i].x < min_x)
            min_x = pl[i].x;
        else if (pl[i].x > max_x)
            max_x = pl[i].x;
        if (pl[i].y < min_y)
            min_y = pl[i].y;
        else if (pl[i].y > max_y)
            max_y = pl[i].y;
    }

    Point bl = {min_x, min_y}, tr = {max_x, max_y};
    rec.bl = bl;
    rec.tr = tr;
    rec.area = (max(bl.x, tr.x) - min(bl.x, tr.x)) * (max(bl.y, tr.y) - min(bl.y, tr.y));
    return rec;
}

Rectangle mbr(Rectangle recs[], int limit)
{
    Rectangle rec;
    int min_x = recs[0].bl.x, min_y = recs[0].bl.y, max_x = recs[0].tr.x, max_y = recs[0].tr.y;
    for (int i = 0; i < limit; i++)
    {
        if (recs[i].bl.x < min_x)
            min_x = recs[i].bl.x;
        if (recs[i].tr.x > max_x)
            max_x = recs[i].tr.x;
        if (recs[i].bl.y < min_y)
            min_y = recs[i].bl.y;
        if (recs[i].tr.y > max_y)
            max_y = recs[i].tr.y;
    }

    Point bl = {min_x, min_y}, tr = {max_x, max_y};
    rec.bl = bl;
    rec.tr = tr;
    rec.area = (max(bl.x, tr.x) - min(bl.x, tr.x)) * (max(bl.y, tr.y) - min(bl.y, tr.y));
    return rec;
}

int main()
{
    int n;
    cin >> n;

    int m;
    char f;
    Rectangle mbrs[n];

    int cx, cy, cr;
    int lx1, ly1, lx2, ly2;
    int px, py;

    Rectangle recs[100];
    int rectangle_count;
    Point ps[100];
    int points_count;

    for (int i = 0; i < n; i++)
    {
        rectangle_count = 0;
        points_count = 0;

        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> f;
            if (f == 'p')
            {
                cin >> px >> py;
                ps[points_count++] = {px, py};
            }
            else if (f == 'l')
            {
                cin >> lx1 >> ly1 >> lx2 >> ly2;
                recs[rectangle_count++] = rectangle_from_line(lx1, ly1, lx2, ly2);
            }
            else if (f == 'c')
            {
                cin >> cx >> cy >> cr;
                recs[rectangle_count++] = recatangle_from_circle(cx, cy, cr);
            }
        }
        recs[rectangle_count++] = rectangle_from_points(ps, points_count);
        mbrs[i] = mbr(recs, rectangle_count);
    }

    for (Rectangle mbr : mbrs)
    {
        cout << mbr.bl.x << " " << mbr.bl.y << " " << mbr.tr.x << " " << mbr.tr.y << " " << endl;
    }
    return 0;
}