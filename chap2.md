## 第二章 Python程式語言

### 2.1 Python程式語言概述<sup>[1]</sup>
Python 是一種**通用型高階程式語言**，由吉多·范羅蘇姆([Guido van Rossum](https://zh.wikipedia.org/zh-tw/%E5%90%89%E5%A4%9A%C2%B7%E8%8C%83%E7%BD%97%E8%8B%8F%E5%A7%86))開發，第一版於1991年釋出。Python是一種**直譯語言**，Python的設計哲學強調程式碼的可讀性和簡潔的語法（尤其是使用**空格縮排**劃分代碼塊，而非使用大括號或者關鍵詞）。不管是小型還是大型程式，該語言都試圖讓程式的結構清晰明了。Python擁有**動態型別**系統和**垃圾回收**功能，能夠自動管理記憶體使用，並且支援多種**撰寫典範**，包括物件導向、命令式、函數式和程序式編程。擁有一個巨大而廣泛的標準程式庫。Python 直譯器幾乎可以在所有的作業系統中執行。Python的正式直譯器CPython是用C語言編寫的、是一個自由軟體，目前由[Python軟體基金會](http://python.org)管理。目前，Python可分為2.x及3.x版本，Python 2.0於2000年10月16日發布，增加了實現完整的垃圾回收，並且支援Unicode。同時，整個開發過程更加透明，社群對開發進度的影響逐漸擴大。Python 3.0於2008年12月3日發布，此版不完全相容之前的Python原始碼。不過，很多新特性後來也被移植到舊的Python 2.6/2.7版本。

Python是完全物件導向的程式語言。函式、模組、數字、字串都是物件。並且完全支援繼承、重載、衍生、多重繼承，有益於增強原始碼的複用性。Python支援重載運算符，因此Python也支援泛型設計。Python本身被設計為可擴充的。並非所有的特性和功能都整合到語言核心。Python提供了豐富的API和工具，以便程式設計師能夠輕鬆地使用C、C++、Cython來編寫擴充模組。Python編譯器本身也可以被整合到其它需要指令碼語言的程式內。因此，有很多人把Python作為一種「**膠水語言**」使用。2004年，Python已在Google內部使用，Google召募許多Python高手，但在這之前就已決定使用Python。他們的目的是儘量使用Python，在不得已時改用C++；在操控硬體的場合使用C++，在快速開發時候使用Python。

Python的設計哲學是「優雅」、「明確」、「簡單」。Python開發者的哲學是「用一種方法，最好是只有一種方法來做一件事」，也因此它和擁有明顯個人風格的其他語言很不一樣。在設計Python語言時，如果面臨多種選擇，Python開發者一般會拒絕花俏的語法，而選擇明確沒有或者很少有歧義的語法。這些準則被稱為「[Python格言](http://wiki.python.org.tw/The%20Zen%20Of%20Python)」。Python開發人員盡量避開不成熟或者不重要的優化。一些針對非重要部位的加快運行速度的補丁通常不會被合併到Python內。再加上因為Python屬於動態型別語言，動態型別語言是在執行期間檢查資料的類型，不得不保持描述變數值的實際類型標記，程式在每次操作變數時，需要執行資料依賴分支，而靜態型別語言相對於動態型別語言，在聲明變數時已經指定了資料類型和表示方法，根據這一原理導致Python相對於C、Visual Basic等靜態型別語言來說執行速度較慢。不過，根據二八定律，大多數程式對速度要求不高。在某些對運行速度要求很高的情況，Python設計師傾向於使用JIT技術，或者用使用C/C++語言改寫這部分程式。目前可用的JIT技術是PyPy。

Python擁有一個強大的標準庫[9]。Python語言的核心只包含數字、字串、列表、字典、檔案等常見類型和函式，而由Python標準庫提供了系統管理、網路通訊、文字處理、資料庫介面、圖形系統、XML處理等額外的功能。

Python標準庫的主要功能有：

* 文字處理，包含文字格式化、正規表示式符合、文字差異計算與合併、Unicode支援，二進位資料處理等功能
* 檔案處理，包含檔案操作、建立臨時檔案、檔案壓縮與歸檔、操作設定檔等功能
* 作業系統功能，包含執行緒與行程支援、IO復用、日期與時間處理、呼叫系統函式、記錄檔（logging）等功能
* 網路通訊，包含網路通訊端，SSL加密通訊、異步網路通訊等功能
* 網路協定，支援HTTP，FTP，SMTP，POP，IMAP，NNTP，XMLRPC等多種網路協定，並提供了編寫網路伺服器的框架
* W3C格式支援，包含HTML，SGML，XML的處理。
* 其它功能，包括國際化支援、數學運算、HASH、Tkinter等

Python社群提供了大量的第三方模組，使用方式與標準庫類似。它們的功能覆蓋科學計算、Web開發、資料庫介面、圖形系統多個領域。第三方模組可以使用Python或者C語言編寫。

python的應用領域非常廣泛，根據[TIOBE的評估](https://www.tiobe.com/tiobe-index/)，Python是目前軟體開發人員相當喜愛的程式語言之一，九月份排名第三。相關的應用領域包括

* Python經常被用於網頁開發。比如，通過mod_wsgi模組，Apache可以運行用Python編寫的Web程式。Python定義了WSGI標準應用介面來協調Http伺服器與基於Python的Web程式之間的溝通。一些Web框架，如Django、Pyramid、TurboGears、Tornado、web2py、Zope、Flask等，可以讓程式設計師輕鬆地開發和管理複雜的Web程式。
* Python對於各種網路協定的支援很完善，因此經常被用於編寫伺服器軟體、網路爬蟲。第三方函式庫Twisted支援非同步線上編寫程式和多數標準的網路協定（包含用戶端和伺服器），並且提供了多種工具，被廣泛用於編寫高效能的伺服器軟體。
* Python本身包含的Tkinter庫能夠支援簡單的GUI開發。但是越來越多的Python程式設計師選擇wxPython或者PyQt等GUI套件來開發跨平台的桌面軟體。使用它們開發的桌面軟體執行速度快，與用戶的桌面環境相契合。通過PyInstaller還能將程式釋出為獨立的安裝程式包。
* 許多作業系統裡，Python是標準的系統元件。大多數Linux發行版和Mac OS X都整合了Python，可以在終端機下直接執行Python。有一些Linux發行版的安裝器使用Python語言編寫。Python標準庫包含了多個調用作業系統功能的函式庫。pywin32這個第三方軟體包能夠存取Windows的COM服務及其它Windows API。使用IronPython能夠直接調用.Net Framework。
* NumPy、SciPy、Matplotlib可以讓Python程式設計師編寫科學計算程式。近年來在大數據資料分析上，Python有著重要的應用！和R語言不同，Python本身就是一門工程性語言，資料科學家用Python實現的演算法，對於大數據初創公司節省成本是非常有幫助的。也因為資料科學家對Python和R的熱愛，Spark對這兩種語言提供了非常好的支援。Python在網路爬蟲、雲端基礎設施、DevOps與數據處理等領域都是炙手可熱的語言，只要學會Python，就可以實現一個完整的BigData處理平臺。<sup>[2]</sup>
* 在遊戲開發領域，可以利用Pygame遊戲開發程式庫撰寫遊戲。Pygame是建立在SDL程式庫上，可以建立遊戲及多媒體的Python應用程式。
* Python可以用來開發手機應用程式，Python-for-Android是一個python程式庫用來開發Android應用程式。Kivy是開源Python函式庫，用於開發行動應用程式和其它採用自然使用者介面的多點觸控應用軟體。它可以在Android，iOS，Linux，OS X和Windows執行。採用MIT授權條款，Kivy是自由並且開源的軟體。Kivy的主要架構由Kivy組織開發，並有Python用於Android，Kivy iOS，和其它許多函式庫被使用在所有平台。Kivy也支援由Bountysource贊助的樹莓派。此外，qpython是一個較新的專案，它是一個在Android上運行的Python程式引擎，可以讓你在Android平台上執行Python程式碼。

### 2.2 安裝Python

目前Pyhthon程式語言的版本有二，一為3.7.0，一為2.7.15，兩者差異後續討論。這裡主要說明如何安裝Python程式直譯器，課程中主要
使用3.x版本，且在微軟作業系統下執行，因此可以到Python官方網頁(https://www.python.org/downloads/windows/) 下載適用於微軟作業系統(Windows)下執行的Python程式直譯器。

![python下載網頁](figs/fig2-1.png)

選擇好適當的版本後，可以循著安裝提示一步一步安裝。安裝完畢要留意安裝的檔案夾位置，以便後續運用。

### 2.3 Python初次接觸
### 2.4 Hello world 程式

[1]: https://zh.wikipedia.org/wiki/Python
[2]: https://www.uuu.com.tw/Public/content/Edm/150817_Python1.htm
