#ifndef UE4SS_SDK_BP_Collectible_Base_HPP
#define UE4SS_SDK_BP_Collectible_Base_HPP

class ABP_Collectible_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UInstantUsable* InstantUsable;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* UseTrigger;
    USceneComponent* DefaultSceneRoot;
    USoundBase* PickupSound;
    UParticleSystem* PickupParticles;
    UResourceData* Resource;
    bool IsActive;
    bool DestroyAfterPickedUp;
    float ResourcesToAdd;

    void OnRep_IsActive();
    void PickedUp();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_Collectible_Base(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, int32 K2Node_ComponentBoundEvent_userCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UCappedResource* CallFunc_GetResource_ReturnValue, float CallFunc_Add_ReturnValue);
}

#endif
