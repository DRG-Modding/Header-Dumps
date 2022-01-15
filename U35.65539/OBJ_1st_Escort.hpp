#ifndef UE4SS_SDK_OBJ_1st_Escort_HPP
#define UE4SS_SDK_OBJ_1st_Escort_HPP

class UOBJ_1st_Escort_C : UEscortObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftClassPtr<UObject> GarageBeacon;
    bool MuleClass;
    FSoftObjectPath EscortMuleClass;

    int32 GetObjectiveAmount(float missionLengthint32 CallFunc_Round_ReturnValue);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText(EEscortMissionState Temp_byte_Variable, FText Temp_text_Variable, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, FText CallFunc_MakeLiteralText_ReturnValue_6, FText K2Node_Select_Default);
    UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void OnEscortMuleSpawnedEvent();
    void OnMuleDied(UHealthComponentBase* HealthComponent);
    void SpawnGarage();
    void OnAllDwarvesDown();
    void ExecuteUbergraph_OBJ_1st_Escort(int32 EntryPoint, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UHealthComponentBase* K2Node_Event_healthComponent, bool K2Node_SwitchEnum_CmpSuccess, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<ARessuplyPod> K2Node_ClassDynamicCast_AsRessuply_Pod, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_GetOwner_ReturnValue, ARessuplyPod* CallFunc_DropToTarget_ReturnValue, FString CallFunc_Conv_SoftClassReferenceToString_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FString CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1, AActor* CallFunc_FinishSpawningActor_ReturnValue, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue_1, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable_1, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
