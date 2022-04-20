
    while (true)
    {
        for (auto v : vec)
        {
            if (v % 2 == 1)
                evenTrue = false;
            else
                v /= 2;
        }
        if (!evenTrue)
            break;
        for (auto v : vec)
            num++;
    }
    std::cout << num << std::endl;
