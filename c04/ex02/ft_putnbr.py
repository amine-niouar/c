

def ft_putnbr(nb):
    if nb < 0 :
        print '-'
        nb *= -1;
    if (nb / 10) > 0 :
        ft_putnbr(nb / 10)
    
    print str(nb % 10)

def main():
   nb = -42
   ft_putnbr(nb)
   

main()
