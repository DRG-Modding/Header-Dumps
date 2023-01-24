#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

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

};

struct FInAppPurchaseProductRequest
{
    FString ProductIdentifier;
    bool bIsConsumable;

};

struct FInAppPurchaseRestoreInfo
{
    FString Identifier;
    FString ReceiptData;
    FString TransactionIdentifier;

};

struct FNamedInterface
{
    FName InterfaceName;
    class UObject* InterfaceObject;

};

struct FNamedInterfaceDef
{
    FName InterfaceName;
    FString InterfaceClassName;

};

class ITurnBasedMatchInterface : public IInterface
{

    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
};

class UNamedInterfaces : public UObject
{
    TArray<FNamedInterface> NamedInterfaces;
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;

};

#endif
