int my_compute_square_root(int nb)
{
    int i = 0;
    
    while (i*i < nb)
        i++;
    if (i*i == nb)
        return (i);
    else if (i*i > nb)
        return (0);
    return (0);
}
