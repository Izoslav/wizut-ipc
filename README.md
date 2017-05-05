# Wykład
Kontakt: [marcin.kolodziej1@globallogic.com](mailto:marcin.kolodziej1@globallogic.com) lub [dev@izoslav.pl](mailto:dev@izoslav.pl)

Prezentacja: [WIZUT_KMIM_M2_M4.pdf](https://github.com/Izoslav/wizut-ipc/raw/master/WIZUT_KMIM_M2_M4.pdf)

# Przykłady
1. Rozwiązania natywne dla Linuxa (POSIX)
    1. Potoki (ang. _pipes_)
    2. Kolejki (ang. _queues_)
    3. Pamięć współdzielona (ang. _shared memory_)
    4. Gniazda (agn. _sockets_)

2. Biblioteka boost
    1. __boost::interprocess__
    2. __boost::process__

3. Valgrind
    1. Helgrind
    2. DRD

# Zadanie na ocenę

- Zaimplementować prosty "czat" międzyprocesowy.
    1. Klient - łączy się wybranym sposobem z serwerem, przesyła mu wiadomości zawierające następujące dane:
        1. Czas nadania wiadomości.
        2. Identyfikator nadawcy.
        3. Wiadomość.
    2. Serwer - przyjmuje połączenia, wypisuje następujące informacje na standardowe wyjście albo do pliku:
        1. Wypisuje następujące informacje na standardowe wyjście albo do pliku:
            1. Czas nadania wiadomości.
            2. Czas odebrania wiadomości.
            3. Identyfikator nadawcy.
            4. Wiadomość.
        2. Wysyła potwierdzenie odebrania wiadomości do klienta.
        3. Rozsyła otrzymane wiadomości do połączonych klientów. (* nadobowiązkowe)

# Zadania na laboratoria
## Komunikacja międzyprocesowa
1. Zestawić połączenie dwukierunkowe między procesami przy użyciu potoków.
2. Użyć mechanizmu pamięci współdzielonej do synchronizacji ustawień (struktury z jakimiś danymi) między wieloma procesami.
3. Napisać program serwera oraz klienta, który pozwoli na komunikację między dwoma klientami poprzez serwer przy pomocy kolejki wiadomości.
4. Zaimplementować echo serwer przy pomocy gniazd TCP.

## Biblioteka boost
- Pojawią się bliżej 27.05

## Bibliografia
- [http://www.tldp.org](http://www.tldp.org)
- [http://man7.org/linux/man-pages/index.html](http://man7.org/linux/man-pages/index.html)
- [http://www.boost.org/doc/libs/1_64_0/doc/html/interprocess.html](http://www.boost.org/doc/libs/1_64_0/doc/html/interprocess.html)
- [http://www.boost.org/doc/libs/1_64_0/doc/html/process.html](http://www.boost.org/doc/libs/1_64_0/doc/html/process.html)
- [http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2044.html](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2044.html)

- [https://github.com/Izoslav/wizut-ipc](https://github.com/Izoslav/wizut-ipc)


## Dodatkowe informacje
- Biblioteka `boost::process` jest dostępna dopiero od wersji `1.64`, niedostępnej na uczelnianych maszynach wirtualnych.
