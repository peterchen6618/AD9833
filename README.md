# AD9833
## Synopsis 概要
本專案為控制AD9833晶片輸出不同頻率、波型和相位差之信號

## Getting Started 使用指南

### Prerequisites 項目使用條件

- 測試環境：Windows10_x64 作業系統

- 編譯器：keil_V5.37.0

- 開發板：STM32F407G-DISC1
	
- 測試設備：AD9833

### Installation 安装
本專案使用HAL庫開發，STM32與AD9833連接腳位如下:

| STM32 | AD9833 Pin |
| ----- | ---------- |
| PC0   | DATA       |
| PC1   | SCK        |
| PC2   | SS         |

### Usage example 使用示例
本專案撰寫了AD9833的API函數如下:

```C
// 初始化AD9833，包括腳位之定義
void AD9833_Init(AD9833_Typedef AD9833)
// 設定輸出波型
void AD9833_SetWave(uint16_t Wave,AD9833_Typedef AD9833);
// 設定波型頻率和相位
void AD9833_SetWaveData(float Frequency,float Phase,AD9833_Typedef AD9833);
```
## Reference 參考
- [AD9833-Git][1]

  [1]: https://github.com/peterchen6618/AD9833.git  "游標顯示"
