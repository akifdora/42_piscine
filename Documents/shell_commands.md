# SHELL COMMANDS
Bu dökümanda ihtiyaç dahilindeki bütün shell komutları bulunmakta ve eklenmektedir.

#### pwd
> Bulunduğumuz komutu iTerm2 üzerinden gösterir.

#### cd
> Dizin yolunu değiştirme komutudur. `cd klasor_adi`

#### mkdir
> Klasör oluşturma komutudur. `mkdir klasor_adi`

#### touch
> Dosya oluşturma komutudur. `touch dosya_adi`

#### cat
> Dosya içeriğini gösteren komuttur. `cat dosya_adi`

#### vim
> Dosya içerisine girme komutudur. `vim dosya_adi`

#### Dosya İçeriğini Değiştirme
> Dosya içerisindeki içeriği değiştirmek için **"İ"** harfi kullanılır. Dosya içerisindeki değişiklik yapıldıktan sonra çıkmak için **"ESC"** tuşuna tıklayıp **":wq"** yazdıktan sonra **ENTER** tuşuna tıklanır, dosya kaydedilir ve klasöre dönülür.

#### ls -l
> Bulunduğumuz konumdaki dosya ve klasör içeriğini ayrıntılı bir şekilde (oluşturulma tarihi/zamanı, dosya izinlerinin byte değerlerini) ekrana yazdırır. `ls -l`

#### :wq!
> :wq komutu ile çıkamadığımız bölüme bu komut sayesinde zorla çıkıyoruz. `:wq!`

#### chmod
> Dosya izinlerini değiştirme komutudur. `chmod`

#### Dosya İzinleri (rwx)
> r, okuma iznidir değeri 4'tür izin listesinin başındadır. w, yazma iznidir değeri 2'dir izin listesinin ortasındadır. x, çalıştırma iznidir değeri 1'dir izin listesinin sonundadır. Tüm değerlerin toplamı 7'dir yani tam yetkidir. `chmod 777 dosya_adi`

#### touch -t
> Dosyanın oluşturulma tarihini değiştirmek için kullanılan komuttur. `touch -t 10062304`

#### tar
> Dosyayı sıkıştırma için kullanılan komuttur. `tar -cf dosya_adi.tar dosya_adi`
