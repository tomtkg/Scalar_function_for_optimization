# Scalar function for optimization

このリポジトリにはスカラー化関数（集約関数）がまとめてあります.   
分解アプローチに基づく多目的進化計算最適化アルゴリズムで使われています．  
2目的最適化におけるスカラー化関数を確認するため作成しました．

# プログラムの説明

Visual Studio 2015 C++で製作されています．  
kの値を変更することで重みの比を変更できます.  
cの値も変更することで重みをより柔軟に変更できます．  

# example image  
## Weighted Sum  approach
|![image1](image/WS_3_2.png "WS_3_2.png")|![image2](image/WS_1_1.png "WS_1_1.png")|![image3](image/WS_2_3.png "WS_2_3.png")|
|---|---|---|  
## Tchebycheff approach
|![image1](image/TCH_3_2.png "TCH_3_2.png")|![image2](image/TCH_1_1.png "TCH_1_1.png")|![image3](image/TCH_2_3.png "TCH_2_3.png")|
|---|---|---|
## Reciprocal Tchebycheff approach
|![image1](image/rTCH_3_2.png "rTCH_3_2.png")|![image2](image/rTCH_1_1.png "rTCH_1_1.png")|![image3](image/rTCH_2_3.png "rTCH_2_3.png")|
|---|---|---|
## Penalty-based Boundary Intersection approach
|![image1](image/PBI0.5_3_2.png "PBI0.5_3_2.png")|![image2](image/PBI0.5_1_1.png "PBI0.5_1_1.png")|![image3](image/PBI0.5_2_3.png "PBI0.5_2_3.png")|
|![image1](image/PBI1_3_2.png "PBI1_3_2.png")|![image2](image/PBI1_1_1.png "PBI1_1_1.png")|![image3](image/PBI1_2_3.png "PBI1_2_3.png")|
|![image1](image/PBI2_3_2.png "PBI2_3_2.png")|![image2](image/PBI2_1_1.png "PBI2_1_1.png")|![image3](image/PBI2_2_3.png "PBI2_2_3.png")|
|---|---|---|
## Inverted Penalty-based Boundary Intersection approach
|![image1](image/PBI5_3_2.png "PBI5_3_2.png")|![image2](image/PBI5_1_1.png "PBI5_1_1.png")|![image3](image/PBI5_2_3.png "PBI5_2_3.png")|
|![image1](image/IPBI0.5_3_2.png "IPBI0.5_3_2.png")|![image2](image/IPBI0.5_1_1.png "IPBI0.5_1_1.png")|![image3](image/IPBI0.5_2_3.png "IPBI0.5_2_3.png")|
|![image1](image/IPBI1_3_2.png "IPBI1_3_2.png")|![image2](image/IPBI1_1_1.png "IPBI1_1_1.png")|![image3](image/IPBI1_2_3.png "IPBI1_2_3.png")|
|![image1](image/IPBI2_3_2.png "IPBI2_3_2.png")|![image2](image/IPBI2_1_1.png "IPBI2_1_1.png")|![image3](image/IPBI2_2_3.png "IPBI2_2_3.png")|
|![image1](image/IPBI5_3_2.png "IPBI5_3_2.png")|![image2](image/IPBI5_1_1.png "IPBI5_1_1.png")|![image3](image/IPBI5_2_3.png "IPBI5_2_3.png")|

