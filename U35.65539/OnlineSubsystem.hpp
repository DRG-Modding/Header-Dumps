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

struct UInAppPurchaseProductInfo
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

struct UInAppPurchaseRestoreInfo
{
    FString Identifier;
    FString ReceiptData;
    FString TransactionIdentifier;
}

struct UNamedInterfaceDef
{
    FName InterfaceName;
    FString InterfaceClassName;
}

struct UNamedInterface
{
    FName InterfaceName;
    UObject* InterfaceObject;
}

struct UInAppPurchaseProductRequest
{
    FString ProductIdentifier;
    bool bIsConsumable;
}

#endif
