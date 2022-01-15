#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

class UNamedInterfaces : UObject
{
    TArray<FNamedInterface> NamedInterfaces;
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;
}

class UTurnBasedMatchInterface : UInterface
{

    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
}

struct FInAppPurchaseProductInfo
{
    FString Identifier;
    FString TransactionIdentifier;
    FString DisplayName;
    FString DisplayDescription;
    FString DisplayPrice;
    float RawPrice;
    FString CurrencyCode;
    FString CurrencySymbol;
    FString DecimalSeparator;
    FString GroupingSeparator;
    FString ReceiptData;
}

struct FInAppPurchaseRestoreInfo
{
    FString Identifier;
    FString ReceiptData;
    FString TransactionIdentifier;
}

struct FNamedInterfaceDef
{
    FName InterfaceName;
    FString InterfaceClassName;
}

struct FNamedInterface
{
    FName InterfaceName;
    UObject* InterfaceObject;
}

struct FInAppPurchaseProductRequest
{
    FString ProductIdentifier;
    bool bIsConsumable;
}

#endif
