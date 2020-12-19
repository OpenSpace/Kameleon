C------------------------------------------------------------------------------
* Copyright 1996-2013 United States Government as represented by the
* Administrator of the National Aeronautics and Space Administration.
* All Rights Reserved.
C------------------------------------------------------------------------------
C------------------------------------------------------------------------------
C
C  NSSDC/CDF				Digital FORTRAN-specific include
C					file for FORTRAN interface.
C
C  Version 1.0, 20-Sep-99, Raytheon ITSS.
C
C  Modification history:
C
C   V1.0  20-Sep-99, M Liu      Original version.
C   V1.1  08-Apr-04, M Liu      Added  new data type CDF_EPOCH16 and some
C                               epoch functions related to the new type.
C
C------------------------------------------------------------------------------

       INTERFACE
         SUBROUTINE CDF_DELETE_ATTR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_DELETE_ATTR
          !DEC$ ALIAS CDF_DELETE_ATTR, '_cdf_delete_attr'
         END SUBROUTINE CDF_DELETE_ATTR
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_GET_CACHESIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_CACHESIZE
          !DEC$ ALIAS CDF_GET_CACHESIZE, '_cdf_get_cachesize'
         END SUBROUTINE CDF_GET_CACHESIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_DECODING
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_DECODING
          !DEC$ ALIAS CDF_GET_DECODING, '_cdf_get_decoding'
         END SUBROUTINE CDF_GET_DECODING
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NEGTOPOSFP0_MODE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NEGTOPOSFP0_MODE
          !DEC$ ALIAS CDF_GET_NEGTOPOSFP0_MODE, '_cdf_get_negtoposfp0_mode'
         END SUBROUTINE CDF_GET_NEGTOPOSFP0_MODE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_READONLY_MODE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_READONLY_MODE
          !DEC$ ALIAS CDF_GET_READONLY_MODE, '_cdf_get_readonly_mode'
         END SUBROUTINE CDF_GET_READONLY_MODE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZMODE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZMODE
          !DEC$ ALIAS CDF_GET_ZMODE, '_cdf_get_zmode'
         END SUBROUTINE CDF_GET_ZMODE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_COMPRESS_CACHESIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_COMPRESS_CACHESIZE
          !DEC$ ALIAS CDF_GET_COMPRESS_CACHESIZE, '_cdf_get_compress_cachesize'
         END SUBROUTINE CDF_GET_COMPRESS_CACHESIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_STAGE_CACHESIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_STAGE_CACHESIZE
          !DEC$ ALIAS CDF_GET_STAGE_CACHESIZE, '_cdf_get_stage_cachesize'
         END SUBROUTINE CDF_GET_STAGE_CACHESIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_CACHESIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_CACHESIZE
          !DEC$ ALIAS CDF_GET_ZVAR_CACHESIZE, '_cdf_get_zvar_cachesize'
         END SUBROUTINE CDF_GET_ZVAR_CACHESIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVARS_CACHESIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVARS_CACHESIZE
          !DEC$ ALIAS CDF_GET_ZVARS_CACHESIZE, '_cdf_get_zvars_cachesize'
         END SUBROUTINE CDF_GET_ZVARS_CACHESIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_RESERVEPERCENT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_RESERVEPERCENT
          !DEC$ ALIAS CDF_GET_ZVAR_RESERVEPERCENT, '_cdf_get_zvar_reservepercent'
         END SUBROUTINE CDF_GET_ZVAR_RESERVEPERCENT
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_SEQPOS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_SEQPOS
          !DEC$ ALIAS CDF_GET_ZVAR_SEQPOS, '_cdf_get_zvar_seqpos'
         END SUBROUTINE CDF_GET_ZVAR_SEQPOS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_NAME
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_NAME
          !DEC$ ALIAS CDF_GET_ATTR_NAME, '_cdf_get_attr_name'
         END SUBROUTINE CDF_GET_ATTR_NAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_SCOPE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_SCOPE
          !DEC$ ALIAS CDF_GET_ATTR_SCOPE, '_cdf_get_attr_scope'
         END SUBROUTINE CDF_GET_ATTR_SCOPE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DELETE_ATTR_GENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_DELETE_ATTR_GENTRY
          !DEC$ ALIAS CDF_DELETE_ATTR_GENTRY, '_cdf_delete_attr_gentry'
         END SUBROUTINE CDF_DELETE_ATTR_GENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DELETE_ATTR_RENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_DELETE_ATTR_RENTRY
          !DEC$ ALIAS CDF_DELETE_ATTR_RENTRY, '_cdf_delete_attr_rentry'
         END SUBROUTINE CDF_DELETE_ATTR_RENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DELETE_ATTR_ZENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_DELETE_ATTR_ZENTRY
          !DEC$ ALIAS CDF_DELETE_ATTR_ZENTRY, '_cdf_delete_attr_zentry'
         END SUBROUTINE CDF_DELETE_ATTR_ZENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_NUM_GENTRIES
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_NUM_GENTRIES
          !DEC$ ALIAS CDF_GET_ATTR_NUM_GENTRIES, '_cdf_get_attr_num_gentries'
         END SUBROUTINE CDF_GET_ATTR_NUM_GENTRIES
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_NUM_RENTRIES
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_NUM_RENTRIES
          !DEC$ ALIAS CDF_GET_ATTR_NUM_RENTRIES, '_cdf_get_attr_num_rentries'
         END SUBROUTINE CDF_GET_ATTR_NUM_RENTRIES
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_NUM_ZENTRIES
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_NUM_ZENTRIES
          !DEC$ ALIAS CDF_GET_ATTR_NUM_ZENTRIES, '_cdf_zet_attr_num_gentries'
         END SUBROUTINE CDF_GET_ATTR_NUM_ZENTRIES
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_MAX_GENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_MAX_GENTRY
          !DEC$ ALIAS CDF_GET_ATTR_MAX_GENTRY, '_cdf_get_attr_max_gentry'
         END SUBROUTINE CDF_GET_ATTR_MAX_GENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_MAX_RENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_MAX_RENTRY
          !DEC$ ALIAS CDF_GET_ATTR_MAX_RENTRY, '_cdf_get_attr_max_rentry'
         END SUBROUTINE CDF_GET_ATTR_MAX_RENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_MAX_ZENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_MAX_ZENTRY
          !DEC$ ALIAS CDF_GET_ATTR_MAX_ZENTRY, '_cdf_get_attr_max_zentry'
         END SUBROUTINE CDF_GET_ATTR_MAX_ZENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_GENTRY_DATATYPE
         !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_GENTRY_DATATYPE
         !DEC$ ALIAS CDF_GET_ATTR_GENTRY_DATATYPE, '_cdf_get_attr_gentry_datatype'
         END SUBROUTINE CDF_GET_ATTR_GENTRY_DATATYPE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_RENTRY_DATATYPE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_RENTRY_DATATYPE
          !DEC$ ALIAS CDF_GET_ATTR_RENTRY_DATATYPE, '_cdf_get_attr_rentry_datatype'
         END SUBROUTINE CDF_GET_ATTR_RENTRY_DATATYPE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_ZENTRY_DATATYPE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_ZENTRY_DATATYPE
          !DEC$ ALIAS CDF_GET_ATTR_ZENTRY_DATATYPE, '_cdf_get_attr_zentry_datatype'
         END SUBROUTINE CDF_GET_ATTR_ZENTRY_DATATYPE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_GENTRY_NUMELEMS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_GENTRY_NUMELEMS
          !DEC$ ALIAS CDF_GET_ATTR_GENTRY_NUMELEMS, '_cdf_get_attr_gentry_numelems'
         END SUBROUTINE CDF_GET_ATTR_GENTRY_NUMELEMS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_RENTRY_NUMELEMS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_RENTRY_NUMELEMS
          !DEC$ ALIAS CDF_GET_ATTR_RENTRY_NUMELEMS, '_cdf_get_attr_rentry_numelems'
         END SUBROUTINE CDF_GET_ATTR_RENTRY_NUMELEMS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_ZENTRY_NUMELEMS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_ZENTRY_NUMELEMS
          !DEC$ ALIAS CDF_GET_ATTR_ZENTRY_NUMELEMS, '_cdf_get_attr_zentry_numelems'
         END SUBROUTINE CDF_GET_ATTR_ZENTRY_NUMELEMS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DELETE_ZVAR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_DELETE_ZVAR
          !DEC$ ALIAS CDF_DELETE_ZVAR, '_cdf_delete_zvar'
         END SUBROUTINE CDF_DELETE_ZVAR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DELETE_ZVAR_RECS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_DELETE_ZVAR_RECS
          !DEC$ ALIAS CDF_DELETE_ZVAR_RECS, '_cdf_delete_zvar_recs'
         END SUBROUTINE CDF_DELETE_ZVAR_RECS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NUM_RVARS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NUM_RVARS
          !DEC$ ALIAS CDF_GET_NUM_RVARS, '_cdf_get_num_rvars'
         END SUBROUTINE CDF_GET_NUM_RVARS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NUM_ZVARS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NUM_ZVARS
          !DEC$ ALIAS CDF_GET_NUM_ZVARS, '_cdf_get_num_zvars'
         END SUBROUTINE CDF_GET_NUM_ZVARS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_COMPRESSION
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_COMPRESSION
          !DEC$ ALIAS CDF_GET_COMPRESSION, '_cdf_get_compression'
         END SUBROUTINE CDF_GET_COMPRESSION
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_COPYRIGHT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_COPYRIGHT
          !DEC$ ALIAS CDF_GET_COPYRIGHT, '_cdf_get_copyright'
         END SUBROUTINE CDF_GET_COPYRIGHT
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ENCODING
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ENCODING
          !DEC$ ALIAS CDF_GET_ENCODING, '_cdf_get_encoding'
         END SUBROUTINE CDF_GET_ENCODING
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_FORMAT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_FORMAT
          !DEC$ ALIAS CDF_GET_FORMAT, '_cdf_get_format'
         END SUBROUTINE CDF_GET_FORMAT
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_MAJORITY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_MAJORITY
          !DEC$ ALIAS CDF_GET_MAJORITY, '_cdf_get_majority'
         END SUBROUTINE CDF_GET_MAJORITY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_compression_INFO
          !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_COMPRESSION_INFO
          !DEC$ ALIAS CDF_GET_INFO, '_cdf_get_compression_info'
         END SUBROUTINE CDF_GET_compression_INFO
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NUM_ATTRS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NUM_ATTRS
          !DEC$ ALIAS CDF_GET_NUM_ATTRS, '_cdf_get_num_attrs'
         END SUBROUTINE CDF_GET_NUM_ATTRS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NUM_GATTRS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NUM_GATTRS
          !DEC$ ALIAS CDF_GET_NUM_GATTRS, '_cdf_get_num_gattrs'
         END SUBROUTINE CDF_GET_NUM_GATTRS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NUM_VATTRS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NUM_VATTRS
          !DEC$ ALIAS CDF_GET_NUM_VATTRS, '_cdf_get_num_vattrs'
         END SUBROUTINE CDF_GET_NUM_VATTRS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_DATATYPE_SIZE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_DATATYPE_SIZE
          !DEC$ ALIAS CDF_GET_DATATYPE_SIZE, '_cdf_get_datatype_size'
         END SUBROUTINE CDF_GET_DATATYPE_SIZE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_LIB_COPYRIGHT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_LIB_COPYRIGHT
          !DEC$ ALIAS CDF_GET_LIB_COPYRIGHT, '_cdf_get_lib_copyright'
         END SUBROUTINE CDF_GET_LIB_COPYRIGHT
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_LIB_VERSION
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_LIB_VERSION
          !DEC$ ALIAS CDF_GET_LIB_VERSION, '_cdf_get_lib_version'
         END SUBROUTINE CDF_GET_LIB_VERSION
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_VERSION
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_VERSION
          !DEC$ ALIAS CDF_GET_VERSION, '_cdf_get_version'
         END SUBROUTINE CDF_GET_VERSION
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_NAME
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_NAME
          !DEC$ ALIAS CDF_GET_NAME, '_cdf_get_name'
         END SUBROUTINE CDF_GET_NAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_NAME
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_NAME
          !DEC$ ALIAS CDF_GET_ZVAR_NAME, '_cdf_get_zvar_name'
         END SUBROUTINE CDF_GET_ZVAR_NAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_MAXWRITTENRECNUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_MAXWRITTENRECNUM
          !DEC$ ALIAS CDF_GET_ZVAR_MAXWRITTENRECNUM, '_cdf_get_zvar_maxwrittenrecnum'
         END SUBROUTINE CDF_GET_ZVAR_MAXWRITTENRECNUM
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_MAXALLOCRECNUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_MAXALLOCRECNUM
          !DEC$ ALIAS CDF_GET_ZVAR_MAXALLOCRECNUM, '_cdf_get_zvar_maxallocrecnum'
         END SUBROUTINE CDF_GET_ZVAR_MAXALLOCRECNUM
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVARS_MAXWRITTENRECNUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVARS_MAXWRITTENRECNUM
          !DEC$ ALIAS CDF_GET_ZVARS_MAXWRITTENRECNUM, '_cdf_get_zvars_maxwrittenrecnum'
         END SUBROUTINE CDF_GET_ZVARS_MAXWRITTENRECNUM
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_ALLOCRECS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_ALLOCRECS
          !DEC$ ALIAS CDF_GET_ZVAR_ALLOCRECS, '_cdf_get_zvar_allocrecs'
         END SUBROUTINE CDF_GET_ZVAR_ALLOCRECS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_DATATYPE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_DATATYPE
          !DEC$ ALIAS CDF_GET_ZVAR_DATATYPE, '_cdf_get_zvar_datatype'
         END SUBROUTINE CDF_GET_ZVAR_DATATYPE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_NUMELEMS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_NUMELEMS
          !DEC$ ALIAS CDF_GET_ZVAR_NUMELEMS, '_cdf_get_zvar_numelems'
         END SUBROUTINE CDF_GET_ZVAR_NUMELEMS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_NUMDIMS
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_NUMDIMS
          !DEC$ ALIAS CDF_GET_ZVAR_NUMDIMS, '_cdf_get_zvar_numdims'
         END SUBROUTINE CDF_GET_ZVAR_NUMDIMS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_DIMSIZES
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_DIMSIZES
          !DEC$ ALIAS CDF_GET_ZVAR_DIMSIZES, '_cdf_get_zvar_dimsizes'
         END SUBROUTINE CDF_GET_ZVAR_DIMSIZES
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_RECVARIANCE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_RECVARIANCE
          !DEC$ ALIAS CDF_GET_ZVAR_RECVARIANCE, '_cdf_get_zvar_recvariance'
         END SUBROUTINE CDF_GET_ZVAR_RECVARIANCE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_DIMVARIANCES
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_DIMVARIANCES
          !DEC$ ALIAS CDF_GET_ZVAR_DIMVARIANCES, '_cdf_get_zvar_dimvariances'
         END SUBROUTINE CDF_GET_ZVAR_DIMVARIANCES
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_BLOCKINGFACTOR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_BLOCKINGFACTOR
          !DEC$ ALIAS CDF_GET_ZVAR_BLOCKINGFACTOR, '_cdf_get_zvar_blockingfactor'
         END SUBROUTINE CDF_GET_ZVAR_BLOCKINGFACTOR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_COMPRESSION
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_COMPRESSION
          !DEC$ ALIAS CDF_GET_ZVAR_COMPRESSION, '_cdf_get_zvar_compression'
         END SUBROUTINE CDF_GET_ZVAR_COMPRESSION
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_PADVALUE
         !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_PADVALUE
         !DEC$ ALIAS CDF_GET_ZVAR_PADVALUE, '_cdf_get_zvar_padvalue'
         END SUBROUTINE CDF_GET_ZVAR_PADVALUE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_SPARSERECORDS
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_ZVAR_SPARSERECORDS
         !DEC$ ALIAS CDF_GET_ZVAR_SPARSERECORDS,'_cdf_get_zvar_sparserecords'
         END SUBROUTINE CDF_GET_ZVAR_SPARSERECORDS
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_NUMRECS_WRITTEN
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_ZVAR_NUMRECS_WRITTEN
         !DEC$ ALIAS CDF_GET_ZVAR_NUMRECS_WRITTEN,'_cdf_get_zvar_numrecs_written'
         END SUBROUTINE CDF_GET_ZVAR_NUMRECS_WRITTEN
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_RECORDDATA
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_ZVAR_RECORDDATA
         !DEC$ ALIAS CDF_GET_ZVAR_RECORDDATA,'_cdf_get_zvar_recorddata'
         END SUBROUTINE CDF_GET_ZVAR_RECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ZVAR_RECORDDATA
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_PUT_ZVAR_RECORDDATA
         !DEC$ ALIAS CDF_PUT_ZVAR_RECORDDATA,'_cdf_put_zvar_recorddata'
         END SUBROUTINE CDF_PUT_ZVAR_RECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_ALLRECORDS_VARID
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_ZVAR_ALLRECORDS_VARID
         !DEC$ ALIAS CDF_GET_ZVAR_ALLRECORDS_VARID,'_cdf_get_zvar_allrecords_varid'
         END SUBROUTINE CDF_GET_ZVAR_ALLRECORDS_VARID
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_RANGERECORDS_VARID
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_ZVAR_RANGERECORDS_VARID
         !DEC$ ALIAS CDF_GET_ZVAR_RANGERECORDS_VARID,'_cdf_get_zvar_rangerecords_varid'
         END SUBROUTINE CDF_GET_ZVAR_RANGERECORDS_VARID
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_VAR_ALLRECORDS_VARNAME
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_VAR_ALLRECORDS_VARNAME
         !DEC$ ALIAS CDF_GET_VAR_ALLRECORDS_VARNAME,'_cdf_get_var_allrecords_varname'
         END SUBROUTINE CDF_GET_VAR_ALLRECORDS_VARNAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_VAR_RANGERECORDS_NAME
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_GET_VAR_RANGERECORDS_NAME
         !DEC$ ALIAS CDF_GET_VAR_RANGERECORDS_NAME,'_cdf_get_var_rangerecords_name'
         END SUBROUTINE CDF_GET_VAR_RANGERECORDS_NAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ZVAR_ALLRECORDS_VARID
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_PUT_ZVAR_ALLRECORDS_VARID
         !DEC$ ALIAS CDF_PUT_ZVAR_ALLRECORDS_VARID,'_cdf_put_zvar_allrecords_varid'
         END SUBROUTINE CDF_PUT_ZVAR_ALLRECORDS_VARID
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_VAR_ALLRECORDS_VARNAME
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_PUT_VAR_ALLRECORDS_VARNAME
         !DEC$ ALIAS CDF_PUT_VAR_ALLRECORDS_VARNAME,'_cdf_put_var_allrecords_varname'
         END SUBROUTINE CDF_PUT_VAR_ALLRECORDS_VARNAME
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ZVAR_RANGERECORDS_VARID
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_PUT_ZVAR_RANGERECORDS_VARID
         !DEC$ ALIAS CDF_PUT_ZVAR_RANGERECORDS_VARID,'_cdf_put_zvar_rangerecords_varid'
         END SUBROUTINE CDF_PUT_ZVAR_RANGERECORDS_VARID
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_VAR_RANGERECORDS_NAME
         !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_PUT_VAR_RANGERECORDS_NAME
         !DEC$ ALIAS CDF_PUT_VAR_RANGERECORDS_NAME,'_cdf_put_var_rangerecords_name'
         END SUBROUTINE CDF_PUT_VAR_RANGERECORDS_NAME
       END INTERFACE


