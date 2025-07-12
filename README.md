# SmartCare Light Assistant

The **SmartCare Light Assistant** is an intelligent, hands-free lighting system designed for hospital environments to reduce the spread of infections through contactless operation and enhance energy efficiency. By integrating motion detection, gesture recognition, ambient light sensing, and IoT capabilities with MQTT and the Blynk mobile app, this system provides a hygienic, automated solution for controlling lights and curtains in high-risk areas like isolation rooms and ICUs.

## Table of Contents
- [Project Overview](#project-overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [References](#references)

## Project Overview
The SmartCare Light Assistant addresses the critical need to minimize infection transmission in healthcare settings by eliminating physical contact with light switches and curtain controls. The system uses advanced sensor technology interfaced through a Data Acquisition (DAQ) card and controlled via LabVIEW, enabling touchless operation, improving patient comfort, streamlining nursing workflows, and reducing energy waste. IoT integration with MQTT and the Blynk mobile app allows real-time communication and remote monitoring.

## Features
- **Contactless Control**: Motion detection and gesture recognition eliminate the need for physical switches, reducing infection risks.
- **Smart Automation**: Servo motors control curtains, and relays manage lights based on occupancy and ambient light levels.
- **IoT Integration**: MQTT enables real-time data exchange, while the Blynk mobile app provides remote monitoring and control.
- **Energy Efficiency**: Automatically adjusts lighting to minimize energy use during daylight or when rooms are unoccupied.
- **Hospital-Friendly Design**: Tailored for infection control and seamless integration into healthcare workflows.

<img width="1920" height="1080" alt="Screenshot (374)" src="https://github.com/user-attachments/assets/6a021e19-31e8-407b-94ec-f068ccffa924" />


## Hardware Requirements
- Data Acquisition (DAQ) Card (e.g., National Instruments USB-DAQ)
- IR Sensors (2 units)
- Light-Dependent Resistor (LDR) (1 unit)
- Relay Module (2 units)
- Servo Motor (1 unit)
- Resistors (10 units)
- Breadboard and jumper wires

## Software Requirements
- LabVIEW (with DAQmx drivers for DAQ card support)
- Paho-MQTT library for MQTT communication
- Blynk mobile app and Blynk library
- Windows OS (or compatible OS for LabVIEW)

## Installation
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/SMARTCARE-LIGHT-ASSISTANT/SMARTCARE-LIGHT-ASSISTANT.git
   cd SMARTCARE-LIGHT-ASSISTANT
   ```

2. **Set Up LabVIEW**:
   - Install LabVIEW and the necessary DAQmx drivers for your DAQ card.
   - Ensure the DAQ card is recognized by LabVIEW (use NI MAX to verify connectivity).
   - Install required Python libraries for MQTT and Blynk integration:
     ```bash
     pip install paho-mqtt blynklib
     ```

3. **Connect Hardware**:
   - Connect the IR sensors, LDR, relay modules, and servo motor to the DAQ card’s input/output channels as per the schematic (to be added in the `docs/` folder).
   - Ensure proper connections for power, ground, and DAQ card terminals.

4. **Configure Blynk**:
   - Download the Blynk mobile app and create a new project.
   - Obtain the Blynk Auth Token and update it in the LabVIEW configuration or associated Python script (e.g., `config.py`).

5. **Set Up MQTT**:
   - Install an MQTT broker (e.g., Mosquitto) on the host machine or use a cloud-based broker.
   - Update MQTT broker details (host, port, topics) in the LabVIEW configuration or Python script.
<img width="1920" height="1080" alt="Screenshot (375)" src="https://github.com/user-attachments/assets/4f7bd38b-2e59-466c-b85e-8bddd6b39f39" />

6. **Run the Application**:
   - Open the main LabVIEW VI (`main.vi`) in LabVIEW.
   - Configure DAQ channels and run the VI to start the system.

## Usage
- **Motion Detection**: IR sensors connected to the DAQ card detect room occupancy and trigger lights automatically.
- **Gesture Control**: Custom gesture recognition, processed via LabVIEW, adjusts light intensity or turns lights on/off.
- **Ambient Light Sensing**: The LDR, interfaced through the DAQ card, adjusts lighting based on natural light levels to save energy.
- **Remote Monitoring**: Use the Blynk app to monitor room status and control lights/curtains remotely.
- **MQTT Communication**: Real-time updates are sent to subscribed devices via MQTT topics, integrated through LabVIEW or Python.

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a Pull Request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## References
1. K. Dixit, "AUTOMATIC ROOM LIGHT SYSTEM FOR POWER SAVING," Sep. 06, 2019. [ResearchGate](https://www.researchgate.net/publication/3356553355/AUTOMATIC_ROOM_LIGHT_SYSTEM_FOR_POWER_SAVING)
2. R. H. Venkatharayan and M. Shahzad, "Gesture Recognition Using Ambient Light," *Proceedings of the ACM on Interactive, Mobile, Wearable and Ubiquitous Technologies*, vol. 2, no. 1, pp. 1-28, Mar. 2018. [DOI](https://doi.org/10.1145/3191772)
3. Van Doi Truong et al., "Contagious infection-free medical interaction system with machine vision controlled by remote hand gesture during an operation," *Computational and Structural Biotechnology Journal*, vol. 24, pp. 393-403, Dec. 2024. [DOI](https://doi.org/10.1016/j.csbj.2024.05.006)

---

Feel free to reach out for questions or collaboration opportunities!
