class HealthMonitor:
    def __init__(self, patient_id):
        self.patient_id = patient_id
        self.heart_rate = 0

    def monitor_heart_rate(self, heart_rate):
        self.heart_rate = heart_rate
        self.analyze_heart_rate()

    def analyze_heart_rate(self):
        if self.heart_rate > 100:
            print(f"Alert: Patient {self.patient_id} has an elevated heart rate: {self.heart_rate} bpm!")
        else:
            print(f"Patient {self.patient_id} heart rate is normal: {self.heart_rate} bpm.")

# Example usage: Health monitoring for a patient
monitor = HealthMonitor(patient_id=101)
monitor.monitor_heart_rate(heart_rate=110)  # Simulate an abnormal heart rate
