// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9 */

#ifndef PB_WPI_PROTO_PLANT_NPB_H_INCLUDED
#define PB_WPI_PROTO_PLANT_NPB_H_INCLUDED
#include <pb.h>
#include <span>
#include <string_view>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wpi_proto_ProtobufDCMotor {
    static const pb_msgdesc_t* msg_descriptor(void) noexcept;
    static std::string_view msg_name(void) noexcept;
    static pb_filedesc_t file_descriptor(void) noexcept;

    double nominal_voltage;
    double stall_torque;
    double stall_current;
    double free_current;
    double free_speed;
} wpi_proto_ProtobufDCMotor;


/* Initializer values for message structs */
#define wpi_proto_ProtobufDCMotor_init_default   {0, 0, 0, 0, 0}
#define wpi_proto_ProtobufDCMotor_init_zero      {0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define wpi_proto_ProtobufDCMotor_nominal_voltage_tag 1
#define wpi_proto_ProtobufDCMotor_stall_torque_tag 2
#define wpi_proto_ProtobufDCMotor_stall_current_tag 3
#define wpi_proto_ProtobufDCMotor_free_current_tag 4
#define wpi_proto_ProtobufDCMotor_free_speed_tag 5

/* Struct field encoding specification for nanopb */
#define wpi_proto_ProtobufDCMotor_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, DOUBLE,   nominal_voltage,   1) \
X(a, STATIC,   SINGULAR, DOUBLE,   stall_torque,      2) \
X(a, STATIC,   SINGULAR, DOUBLE,   stall_current,     3) \
X(a, STATIC,   SINGULAR, DOUBLE,   free_current,      4) \
X(a, STATIC,   SINGULAR, DOUBLE,   free_speed,        5)
#define wpi_proto_ProtobufDCMotor_CALLBACK NULL
#define wpi_proto_ProtobufDCMotor_DEFAULT NULL

/* Maximum encoded size of messages (where known) */
#define WPI_PROTO_PLANT_NPB_H_MAX_SIZE           wpi_proto_ProtobufDCMotor_size
#define wpi_proto_ProtobufDCMotor_size           45


#endif
