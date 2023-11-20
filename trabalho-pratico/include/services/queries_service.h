#ifndef QUERIES_SERVICE_H
#define QUERIES_SERVICE_H

#include <stdbool.h>
#include <stdio.h>

#include "controllers/flight_controller.h"
#include "controllers/passenger_controller.h"
#include "controllers/reservation_controller.h"
#include "controllers/user_controller.h"
#include "models/flight.h"
#include "models/passenger.h"
#include "models/reservation.h"
#include "models/user.h"
#include "services/flight_service.h"
#include "services/passenger_service.h"
#include "services/reservation_service.h"
#include "services/user_service.h"
#include "stats/user_stats.h"
#include "utils/output-handler.h"
#include "utils/utils.h"

/**
 * @struct query4_result - Struct that represents the result of query 4 to be
 * used in other places of the program
 */
typedef struct query4_result *QUERY4_RESULT;

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query1(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 * @param N The number of parameters.
 *
 */
void query2(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file, int N);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query3(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query4(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query5(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query6(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query7(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 *
 */
void query8(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            FILE *output_file);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param output_file The pointer to the output file.
 * @param num_parameters The number of parameters.
 */
void query9(bool has_f, char **query_parameters, FlightsData *flights_data,
            PassengersData *passengers_data,
            ReservationsData *reservations_data, UsersData *users_data,
            StatsUserInfo *users_stats, FILE *output_file, int num_parameters);

/**
 * @brief Queries the data structs.
 *
 * @param has_f If the query has the modifier 'F'.
 * @param line The line with the quey parameters.
 * @param num_parameters The number of parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param users_stats The users stats struct.
 * @param output_file The pointer to the output file.
 */
void query10(bool has_f, char **query_parameters, int num_parameters,
             FlightsData *flights_data, PassengersData *passengers_data,
             ReservationsData *reservations_data, UsersData *users_data,
             FILE *output_file);

/**
 * @brief Manages the queries.
 *
 * @param line The line with the quey parameters.
 * @param flights_data The flights data struct.
 * @param passengers_data The passengers data struct.
 * @param reservations_data The reservations data struct.
 * @param users_data The users data struct.
 * @param users_stats The users stats struct.
 * @param output_file The pointer to the output file.
 */
void query_manager(char *line, FlightsData *flights_data,
                   PassengersData *passengers_data,
                   ReservationsData *reservations_data, UsersData *users_data,
                   StatsUserInfo *users_stats, FILE *output_file);

#endif
