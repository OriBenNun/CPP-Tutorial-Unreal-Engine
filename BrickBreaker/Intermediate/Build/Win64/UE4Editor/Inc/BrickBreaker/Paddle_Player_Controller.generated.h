// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRICKBREAKER_Paddle_Player_Controller_generated_h
#error "Paddle_Player_Controller.generated.h already included, missing '#pragma once' in Paddle_Player_Controller.h"
#endif
#define BRICKBREAKER_Paddle_Player_Controller_generated_h

#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_SPARSE_DATA
#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle_Player_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle_Player_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public:


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle_Player_Controller)


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObj() { return STRUCT_OFFSET(APaddle_Player_Controller, BallObj); }


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_12_PROLOG
#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_SPARSE_DATA \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_RPC_WRAPPERS \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_INCLASS \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_SPARSE_DATA \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_INCLASS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BRICKBREAKER_API UClass* StaticClass<class APaddle_Player_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BrickBreaker_Source_BrickBreaker_Paddle_Player_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
