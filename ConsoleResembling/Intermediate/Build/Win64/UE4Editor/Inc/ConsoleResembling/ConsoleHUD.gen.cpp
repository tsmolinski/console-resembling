// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/HUD/ConsoleHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleHUD() {}
// Cross Module References
	CONSOLERESEMBLING_API UFunction* Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsoleHUD();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsoleHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics
	{
		struct ConsoleHUD_eventOnFormatStringSent_Parms
		{
			FString FormatString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::NewProp_FormatString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::NewProp_FormatString = { "FormatString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleHUD_eventOnFormatStringSent_Parms, FormatString), METADATA_PARAMS(Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::NewProp_FormatString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::NewProp_FormatString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::NewProp_FormatString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsoleHUD, nullptr, "OnFormatStringSent__DelegateSignature", nullptr, nullptr, sizeof(ConsoleHUD_eventOnFormatStringSent_Parms), Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AConsoleHUD::execTextCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	void AConsoleHUD::StaticRegisterNativesAConsoleHUD()
	{
		UClass* Class = AConsoleHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextCommitted", &AConsoleHUD::execTextCommitted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics
	{
		struct ConsoleHUD_eventTextCommitted_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleHUD_eventTextCommitted_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleHUD_eventTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//TObjectPtr<FString> SourceMessage;\n//FString* SourceMessage;\n" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
		{ "ToolTip", "TObjectPtr<FString> SourceMessage;\nFString* SourceMessage;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsoleHUD, nullptr, "TextCommitted", nullptr, nullptr, sizeof(ConsoleHUD_eventTextCommitted_Parms), Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsoleHUD_TextCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConsoleHUD_TextCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConsoleHUD_NoRegister()
	{
		return AConsoleHUD::StaticClass();
	}
	struct Z_Construct_UClass_AConsoleHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFormatStringSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFormatStringSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConsoleWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsoleWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsoleHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConsoleHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature, "OnFormatStringSent__DelegateSignature" }, // 3102361795
		{ &Z_Construct_UFunction_AConsoleHUD_TextCommitted, "TextCommitted" }, // 2145957108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ConsoleHUD.h" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_FormatString_MetaData[] = {
		{ "Category", "ConsoleHUD" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_FormatString = { "FormatString", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, FormatString), METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_FormatString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_FormatString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_OnFormatStringSent_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_OnFormatStringSent = { "OnFormatStringSent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, OnFormatStringSent), Z_Construct_UDelegateFunction_AConsoleHUD_OnFormatStringSent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_OnFormatStringSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_OnFormatStringSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData[] = {
		{ "Category", "ConsoleHUD" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass = { "ConsoleWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, ConsoleWidgetClass), Z_Construct_UClass_UConsoleWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget = { "ConsoleWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, ConsoleWidget), Z_Construct_UClass_UConsoleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConsoleHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_FormatString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_OnFormatStringSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsoleHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsoleHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsoleHUD_Statics::ClassParams = {
		&AConsoleHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConsoleHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsoleHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConsoleHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConsoleHUD, 644689283);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<AConsoleHUD>()
	{
		return AConsoleHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsoleHUD(Z_Construct_UClass_AConsoleHUD, &AConsoleHUD::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("AConsoleHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsoleHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
