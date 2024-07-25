// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/Widgets/ConsoleMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleMessage() {}
// Cross Module References
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessage_NoRegister();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessage();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
// End Cross Module References
	void UConsoleMessage::StaticRegisterNativesUConsoleMessage()
	{
	}
	UClass* Z_Construct_UClass_UConsoleMessage_NoRegister()
	{
		return UConsoleMessage::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/ConsoleMessage.h" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleMessage_Statics::ClassParams = {
		&UConsoleMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleMessage, 1328910447);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<UConsoleMessage>()
	{
		return UConsoleMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleMessage(Z_Construct_UClass_UConsoleMessage, &UConsoleMessage::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("UConsoleMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
