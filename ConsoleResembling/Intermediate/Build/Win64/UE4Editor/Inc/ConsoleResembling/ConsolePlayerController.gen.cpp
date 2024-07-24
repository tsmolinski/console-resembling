// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/PlayerController/ConsolePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsolePlayerController() {}
// Cross Module References
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsolePlayerController_NoRegister();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsolePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
// End Cross Module References
	void AConsolePlayerController::StaticRegisterNativesAConsolePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AConsolePlayerController_NoRegister()
	{
		return AConsolePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AConsolePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsolePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsolePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController/ConsolePlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/ConsolePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsolePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsolePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsolePlayerController_Statics::ClassParams = {
		&AConsolePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConsolePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConsolePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsolePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConsolePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConsolePlayerController, 2949974524);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<AConsolePlayerController>()
	{
		return AConsolePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsolePlayerController(Z_Construct_UClass_AConsolePlayerController, &AConsolePlayerController::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("AConsolePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsolePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
