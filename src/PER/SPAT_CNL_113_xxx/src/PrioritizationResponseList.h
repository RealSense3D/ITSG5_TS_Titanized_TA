/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "REG-D"
 * 	found in "MAP_SPAT_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PrioritizationResponseList_H_
#define	_PrioritizationResponseList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrioritizationResponse;

/* PrioritizationResponseList */
typedef struct PrioritizationResponseList {
	A_SEQUENCE_OF(struct PrioritizationResponse) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrioritizationResponseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrioritizationResponseList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrioritizationResponse.h"

#endif	/* _PrioritizationResponseList_H_ */
#include <asn_internal.h>
