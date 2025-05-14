# Arduino WSL 開発メモ（自分用）
https://chatgpt.com/share/68252db0-9d94-8012-89cb-c2e308f82dc7

## ✅ 毎回やること（再起動後や接続後）

```powershell
# PowerShell（Windows 側）
usbipd attach --busid 1-2 --wsl
````

```bash
# Ubuntu（WSL 側）-> 基本的に必要ない
ls /dev/ttyACM0
sudo chmod a+rw /dev/ttyACM0
```

---

## 🧷 エイリアス（\~/.bashrc）

```bash
export ARDUINO_FQBN="arduino:avr:uno"
export ARDUINO_PORT="/dev/ttyACM0"

alias ac="arduino-cli compile --fqbn $ARDUINO_FQBN"
alias au="arduino-cli upload -p $ARDUINO_PORT --fqbn $ARDUINO_FQBN"
alias abu="ac && au"
alias am="arduino-cli monitor -p $ARDUINO_PORT -b 9600"
alias anew="function _anew(){ arduino-cli sketch new \"$1\" && cd \"$1\"; }; _anew"
```

---

## 📎 その他

```powershell
usbipd list          # busid 確認
usbipd detach --busid 4-1   # Windows 側に戻すとき
```

```bash
arduino-cli board list     # WSL 内ポート確認
```

```bash
arduino-cli lib install Firmata
```

---

```

