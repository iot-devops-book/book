from sklearn.linear_model import LinearRegression
import numpy as np

# Sample data for predicting sensor failure
hours = np.array([100, 200, 300, 400, 500])
sensor_readings = np.array([50, 60, 70, 80, 90])

# Training a model to predict sensor data
model = LinearRegression()
model.fit(hours.reshape(-1, 1), sensor_readings)

# Predict sensor reading at 600 hours
predicted_reading = model.predict([[600]])
print(f"Predicted sensor reading at 600 hours: {predicted_reading[0]}")

