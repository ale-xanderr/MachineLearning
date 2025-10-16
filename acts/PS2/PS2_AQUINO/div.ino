float f(int a, int b, int c) {
  float discriminant = b * b - 4 * a * c;
  if (discriminant < 0) {
    Serial.println("Complex roots, returning NaN");
    return NAN;  // Return NaN for complex roots
  }
  float output = (-b + sqrt(discriminant)) / (2 * a);
  return output;
}

void setup() {
  Serial.begin(9600);  // Initialize Serial communication\
  float result = f(1, 4, 4);
  Serial.print("Result: ");
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
}
