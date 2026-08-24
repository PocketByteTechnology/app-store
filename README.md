# Pocketbyte App Store

This is the official app store application for Pocketbyte.

Download new games, apps, and other files directly from your device using Wi-Fi. No USB cable or computer needed.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/8ffac58c-8c27-462d-8ebf-ab221cd94408" />

## Philosophy

The Pocketbyte App Store is self-contained and follows a very UNIX philosophy.

It has two sole purposes:

- Fetch and display a list of apps from the catalog
- Allow the user to download apps onto the SD card

It does these two things and only these two things. But it does it them very well.

Unlike other "stores," such as Steam, Google Play, etc., there are _zero_ monetization features. You do not have to pay to download anything - all of it is 100% free as long as you have a Wi-Fi connection.

## Usage

On your Pocketbyte DevKit's SD card, you must add a `wifi.json` file at the root so that your device can connect to Wi-Fi.

The format looks like this:

```json
{
  "ssid": "<wifi-ssid>",
  "password": "<wifi-password>"
}
```

## Testing on PC

To run this app on your computer without needing a physical Pocketbyte DevKit, use the [Pocketbyte Simulator tool](https://github.com/PocketByteTechnology/simulator).

You do not need a `wifi.json` if you are using the simulator - it will use your computer's current connection.
