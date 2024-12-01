struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
};

void AddRecord(struct sensor *temperature_information, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temp);
void print(struct sensor *temperature_information, int num_row);
float AverageMonthlyTemperature(struct sensor *temperature_information, int N, int Y, int M);
float MinimumTemperatureInAMonth(struct sensor *temperature_information, int N, int Y, int M);
float MaximumTemperatureInAMonth(struct sensor *temperature_information, int N, int Y, int M);
float AverageAnnualTemperature(struct sensor *temperature_information, int N, int Y);
float MinimumTemperatureForTheYear(struct sensor *temperature_information, int N, int Y);
float MaximumTemperatureForTheYear(struct sensor *temperature_information, int N, int Y);