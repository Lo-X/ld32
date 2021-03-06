#ifndef CATEGORY_H
#define CATEGORY_H

namespace Category
{
    enum Type
    {
        None            = 0,
        SoundEffect     = 1 << 0,
        ParticleSystem  = 1 << 1,
        Platform        = 1 << 2,
        Enemy           = 1 << 3,
        Player          = 1 << 4,
        Unicorn         = 1 << 5,
        UnicornPath     = 1 << 6,
        Foreground      = 1 << 7,
        Camera          = 1 << 8,
        UI              = 1 << 9,
        Medkit          = 1 << 10,
        // ...
        //MixedCategory        = Category1 | Category2,

    };
}

#endif // CATEGORY_H
