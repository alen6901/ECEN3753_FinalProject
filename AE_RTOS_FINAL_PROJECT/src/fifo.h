/*
 * fifo.h
 *
 *  Created on: Mar 23, 2021
 *      Author: Alex
 */

#ifndef SRC_HEADER_FILES_FIFO_H_
#define SRC_HEADER_FILES_FIFO_H_


struct node
{
	bool btn;
	bool state;
	struct node *next;
};

struct Physics
{
	uint32_t Gain;
	uint32_t st;
	uint32_t ed;
	uint32_t delta_t;
	uint32_t Dir;
	double gravity;
	uint32_t mass;
	double length;
	int xmin;
	int xmax;
	double theta;
	double h_velocity;
	double v_velocity;
	double h_acceleration;
	double v_acceleration;
	double h_force;
	double v_force;
	double hb_force;
	double vb_force;
	double hc_force;
	double vc_force;
	double h_position;
	double v_position;
	double hc_position;
	double vc_position;
};

struct lcd_info
{
	double theta;
	double x_pos;
	double y_pos;
	double cart_pos;
};

struct Direction
{
	int direction;
	int left;
	int right;
	int time;
};

void pop(int *btn, int *state, struct node **head);

void push(int btn, int state, struct node **head);
#endif /* SRC_HEADER_FILES_FIFO_H_ */
