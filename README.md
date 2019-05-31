## 設計模式

### 設計模式解釋 (轉 from http://jimmy0222.pixnet.net/blog/post/37095632-design-patterns%28%E8%A8%AD%E8%A8%88%E6%A8%A1%E5%BC%8F%29-%E8%87%AA%E6%88%91%E6%95%B4%E7%90%86)


#### Creational Patterns  【創建型(生成)模式】：


在軟體工程中，是處理物件創建機制的設計模式。此類型模式試圖根據適合的情況來決定建立物件。單純的物件創建常會導致一些設計問題或增加設計的複雜度。創建型模式則藉由控制物件的生成方式來解決這問題。


##### 1.  Factory (工廠模式)： 

--Simple Factory  (簡單工廠模式)

--Abstract Factory  (抽象工廠模式)：為一個產品族提供了統一的創建介面。當需要這個產品族的某一系列的時候，可以從抽象工廠中選出相應的系列創建一個具體的工廠類。

目的 : 使程式能輕易的 Port 到另外一個系統上。

使用時機：為要建立一個容易 update , 可移植性高的系統時。

 --Factory Method  (工廠方法模式) ：定義一個介面用於創建對象，但是讓子類決定初始化哪個類。工廠方法把一個類的初始化下放到子類。

目的 : 當 Factory 無法預期以後會需要什麼樣的 component 時，使用 Factory Method ，將責任延遲到 concreteProcuct 身上。

使用時機：在目標功能尚無法決定或可能變化時使用之。


##### 2.  Builder  (建造者模式)：將一個複雜對象的構建與它的表示分離，使得同樣的構建過程可以創建不同的表示。

目的 : Client 不斷呼叫 Builder 建立 component 直到建立完整的 complex component 才呼叫 Builder 傳回 complex component。

使用時機：在設計多目標，多樣的彈性系統時，或目標樣式尚未決定時使用之。


##### 3.  Prototype  (原型模式)： 用原型實例指定創建對象的種類，並且通過拷貝這些原型創建新的對象。

目的 : 讓 object 來擔任建立與自己相同型態的 object的任務。

使用時機：在設計者無法預期以後會有何種物件，且未來維護者可能無能力或無法加入新的物件到物件管理程式之中時。


##### 4.  Singleton  (獨身模式或叫單例模式)：確保一個類只有一個實例，並提供對該實例的全局訪問。

--Registry of Singleton

目的 : 讓一個 class 只能有一個 instance。


#### Structural Patterns  【結構模式】：


藉由一以貫之的方式來了解元件間的關係，以簡化設計。


##### 5.  Adapter  (配接器模式)：將某個類的介面轉換成客戶端期望的另一個介面表示。適配器模式可以消除由於介面不匹配所造成的類兼容性問題。

目的 : 把別人的物件整合到自己的 interface 中。

使用時機：when two incompatible classes should work together。

--Default Adapter

--Object Adapter

--Class Adapter
  

##### 6.  Bridge  (橋樑模式)：將一個抽象與實現解耦，以便兩者可以獨立的變化。

目的 : 把 interface 與 implementation 分開使其互不影響。

使用時機：在設計前用來隔開 user , user interface, object interface 與 implementation。


##### 7.  Composite  (組合模式)：把多個對象組成樹狀結構來表示局部與整體，這樣用戶可以一樣的對待單個對象和對象的組合。

目的 : 遞回定義的物件

使用時機： 對於結構複雜的物件，但介面一致的物件使用之。


##### 8.  Decorator  (裝飾模式)：向某個對象動態地添加更多的功能。修飾模式是除類繼承外另一種擴展功能的方法。

目的 : 使附屬功能能以簡單的繼承方式一層層的套疊上去。

使用時機：要附加功能又不用破壞原來的架構的情況下。


##### 9.  Facade  (外觀模式)：為子系統中的一組介面提供一個一致的界面， 外觀模式定義了一個高層介面，這個介面使得這一子系統更加容易使用。

目的：提供一整組物件對外的介面，以統一對外界面並達到 loose couple 的功能。

使用時機：為在系統太複雜的時候，作為整合之用。


##### 10.  Flyweight  (享元模式)：通過共享以便有效的支持大量小顆粒對象。

目的：利用物件共享的方式以節省實體空間。

使用時機：許多物件都會包含同一物件許多次的時候使用之。


##### 11.  Proxy  (代理模式)：為其他對象提供一個代理以控制對這個對象的訪問。

目的：作為其它物件的存取門戶。

使用時機：物件因為存取時間太長，或重複存取次數太多，或有可能根本不會存取到時使用。


#### Behavioral Patterns  【行為模式】：

用來識別對象之間的常用交流模式並加以實現。如此，可在進行這些交流活動時增強彈性。


##### 12.Chain of Responsibility  (責任鏈模式)：

為解除請求的發送者和接收者之間耦合，而使多個對象都有機會處理這個請求。將這些對象連成一條鏈，並沿著這條鏈傳遞該請求，直到有一個對象處理它。

##### 13.Command  (命令模式)：

將一個請求封裝為一個對象，從而使你可用不同的請求對客戶進行參數化；對請求排隊或記錄請求日誌，以及支持可取消的操作。

##### 14.Iterator  (迭代器模式)：

提供一種方法順序訪問一個聚合對象中各個元素, 而又不需暴露該對象的內部表示。

##### 15.Strategy  (策略模式)：

定義一個演算法的系列，將其各個分裝，並且使他們有交互性。策略模式使得演算法在用戶使用的時候能獨立的改變。

##### 16.Template Method  (模版方法模式)：

模板方法模式準備一個抽象類，將部分邏輯以具體方法及具體構造子類的形式實現，然後聲明一些抽象方法來迫使子類實現剩餘的邏輯。不同的子類可以以不同的方式實現這些抽象方法，從而對剩餘的邏輯有不同的實現。先構建一個頂級邏輯框架，而將邏輯的細節留給具體的子類去實現。

##### 17.Observer  (觀察者模式)：

在對象間定義一個一對多的聯繫性，由此當一個對象改變了狀態，所有其他相關的對象會被通知並且自動刷新。

##### 18.Mediator  (中介者模式)：

包裝了一系列對象相互作用的方式，使得這些對象不必相互明顯作用，從而使它們可以鬆散偶合。當某些對象之間的作用發生改變時，不會立即影響其他的一些對象之間的作用，保證這些作用可以彼此獨立的變化。

##### 19.State  (狀態模式)：

讓一個對象在其內部狀態改變的時候，其行為也隨之改變。狀態模式需要對每一個系統可能取得的狀態創立一個狀態類的子類。當系統的狀態變化時，系統便改變所選的子類。

##### 20.Memento  (備忘錄模式)：

備忘錄對象是一個用來存儲另外一個對象內部狀態的快照的對象。備忘錄模式的用意是在不破壞封裝的條件下，將一個對象的狀態捉住，並外部化，存儲起來，從而可以在將來合適的時候把這個對象還原到存儲起來的狀態。

##### 21.Visitor  (訪問者模式)：

封裝一些施加於某種資料結構元素之上的操作。一旦這些操作需要修改，接受這個操作的資料結構可以保持不變。訪問者模式適用於資料結構相對未定的系統，它把資料結構和作用於結構上的操作之間的耦合解脫開，使得操作集合可以相對自由的演化。

##### 22.Interpreter  (解譯器模式)：

給定一個語言, 定義它的文法的一種表示，並定義一個解釋器, 該解釋器使用該表示來解釋語言中的句子。

