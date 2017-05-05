# Wykład
Kontakt: [marcin.kolodziej1@globallogic.com]() lub [dev@izoslav.pl]()

Prezentacja: [link]()

## Przykłady
1. Rozwiązania natywne dla Linuxa (POSIX)
    1. Potoki (ang. _pipes_)
    2. Kolejki (ang. _queues_)
    3. Pamięć współdzielona (ang. _shared memory_)
    4. Gniazda (agn. _sockets_)

2. Biblioteka boost
    1. __boost::atomic__
    2. __boost::interprocess__
        1. Współdzielenie pamięci
            1. `shared_memory_object`
            2. `file_mapping`
        2. Mechanizmy synchronizacji
            1. `interprocess_mutex`
            2. `name_mutex`
            3. `scoped_lock`
        3. Zmienne warunkowe
            1. `interprocess_condition`
            2. `named_condition`
        4. Semafory
            1. `interprocess_semaphore`
            2. `named_semaphore`
        5. Kolejka wiadomości
            1. `message_queue`
    3. __boost::process__
        1. Uruchamianie procesu
            1. Pojedynczy proces
            2. Grupowanie
        2. Komunikacja z procesem
            1. Synchroniczna
            2. Asynchroniczna
        3. Modyfikowanie zmiennych środowiskowych

3. Valgrind
    1. Helgrind
    2. DRD

# Zadanie na ocenę

# Zadania dodatkowe
## Komunikacja międzyprocesowa
1.
2.
3.

## Biblioteka boost
1.
2.
3.

## Bibliografia


## Dodatkowe informacje
- Biblioteka `boost::process` jest dostępna dopiero od wersji `1.64`, niedostępnej na uczelnianych maszynach wirtualnych.
