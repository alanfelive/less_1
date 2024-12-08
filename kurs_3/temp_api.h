struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
};

void print(struct sensor *temp_info, int num_row);
float AverageMonthlyTemperature(struct sensor *temp_info, long int N, int M, int Y);
float MinimumTemperatureInAMonth(struct sensor *temp_info, int N, int M, int Y);
float MaximumTemperatureInAMonth(struct sensor *temp_info, int N, int M, int Y);
float AverageAnnualTemperature(struct sensor *temp_info, int N, int Y);
float MinimumTemperatureForTheYear(struct sensor *temp_info, int N, int Y);
float MaximumTemperatureForTheYear(struct sensor *temp_info, int N, int Y);