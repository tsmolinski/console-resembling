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
	CONSOLERESEMBLING_API UFunction* Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessage();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleMessage, nullptr, "OnWidgetRemoved__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWidgetRemovedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetRemovedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifetimeProgressbar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifetimeProgressbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature, "OnWidgetRemoved__DelegateSignature" }, // 1417706817
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ConsoleMessage.h" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessage_Statics::NewProp_OnWidgetRemovedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConsoleMessage_Statics::NewProp_OnWidgetRemovedDelegate = { "OnWidgetRemovedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleMessage, OnWidgetRemovedDelegate), Z_Construct_UDelegateFunction_UConsoleMessage_OnWidgetRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_OnWidgetRemovedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_OnWidgetRemovedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessage_Statics::NewProp_LifetimeProgressbar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConsoleMessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsoleMessage_Statics::NewProp_LifetimeProgressbar = { "LifetimeProgressbar", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleMessage, LifetimeProgressbar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_LifetimeProgressbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_LifetimeProgressbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessage_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "ConsoleMessage" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsoleMessage_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleMessage, Lifetime), METADATA_PARAMS(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessage_Statics::NewProp_Lifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleMessage_Statics::NewProp_OnWidgetRemovedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleMessage_Statics::NewProp_LifetimeProgressbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleMessage_Statics::NewProp_Lifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleMessage_Statics::ClassParams = {
		&UConsoleMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UConsoleMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessage_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UConsoleMessage, 2999626770);
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
