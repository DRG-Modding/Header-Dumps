#ifndef UE4SS_SDK_BP_RewardDispenser_HPP
#define UE4SS_SDK_BP_RewardDispenser_HPP

class ABP_RewardDispenser_C : public AEventRewardDispenser
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_RewardUsableComponent_C* BP_RewardUsableComponent;
    class UChildActorComponent* RewardSelectorActor;
    class UBoxComponent* PlayerTrigger;
    class USphereComponent* UsableCollision;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    bool RewardSelectorVisible;
    class APlayerCharacter* NearbyPlayer;
    FBP_RewardDispenser_COnDispenserFinished OnDispenserFinished;
    void OnDispenserFinished();

    bool IsStateValid(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerController* CallFunc_GetLocalFSDPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
    void GetRewardSelector(class ABP_CoreInfuser_Rewards_Selector_C*& Selector, class ABP_CoreInfuser_Rewards_Selector_C* K2Node_DynamicCast_AsBP_Core_Infuser_Rewards_Selector, bool K2Node_DynamicCast_bSuccess);
    void IsPlayerLocallyControlled(bool& LocallyControlled, class APlayerCharacter* Character, class APlayerCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void ToggleRewardSelector(bool InVisible, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_1, class USoundBase* K2Node_Select_Default);
    void OnOwnerAssigned();
    void OnPoweredUp();
    void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Initialize();
    void OnOpenDispenser();
    void On Selector Finished(class USchematic* SchematicReward);
    void OnRewardSelected();
    void Turn On Buttons();
    void ExecuteUbergraph_BP_RewardDispenser(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOwningPlayer_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_PowerUp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsPlayerLocallyControlled_LocallyControlled, bool CallFunc_IsPlayerLocallyControlled_LocallyControlled_1, bool CallFunc_BooleanAND_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_1, bool CallFunc_Not_PreBool_ReturnValue_2, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsPlayerLocallyControlled_LocallyControlled_2, TArray<class USchematic*>& CallFunc_GetSpecialEventsRewardSchematics_ReturnValue, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_3, TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, const TMap<UResourceData*, int32> K2Node_MakeMap_Map, bool CallFunc_TryDeductResources_ReturnValue, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_4, class ABP_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardSelector_Selector_5, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class USchematic* K2Node_CustomEvent_SchematicReward, bool CallFunc_BooleanAND_ReturnValue_5, FExecuteUbergraph_BP_RewardDispenserK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* CallFunc_GetPlayerCharacter_ReturnValue, TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_1, bool CallFunc_IsStateValid_ReturnValue, bool CallFunc_IsStateValid_ReturnValue_1, bool CallFunc_IsStateValid_ReturnValue_2, bool Temp_bool_Variable, TEnumAsByte<ECollisionEnabled::Type> K2Node_Select_Default);
    void OnDispenserFinished__DelegateSignature();
};

#endif
