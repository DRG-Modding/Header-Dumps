#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

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

class UNamedInterfaces : public UObject
{
    TArray<FNamedInterface> NamedInterfaces;
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;

};

class ITurnBasedMatchInterface : public IInterface
{

    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
};

struct FInAppPurchaseProductRequest
{
    FString ProductIdentifier;
    bool bIsConsumable;

};

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

struct FInAppPurchaseRestoreInfo
{
    FString Identifier;
    FString ReceiptData;
    FString TransactionIdentifier;

};

#endif
