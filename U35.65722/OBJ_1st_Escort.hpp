#ifndef UE4SS_SDK_OBJ_1st_Escort_HPP
#define UE4SS_SDK_OBJ_1st_Escort_HPP

class UOBJ_1st_Escort_C : public UEscortObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftClassPtr<UObject> GarageBeacon;
    bool MuleClass;
    FSoftObjectPath EscortMuleClass;

    int32 GetObjectiveAmount(float missionLengthint32 CallFunc_Round_ReturnValue);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText(EEscortMissionState Temp_byte_Variable, FText Temp_text_Variable, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, FText CallFunc_MakeLiteralText_ReturnValue_6, FText K2Node_Select_Default);
    class UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void OnEscortMuleSpawnedEvent();
    void OnMuleDied(class UHealthComponentBase* HealthComponent);
    void SpawnGarage();
    void OnAllDwarvesDown();
    void ExecuteUbergraph_OBJ_1st_Escort(int32 EntryPoint, const FExecuteUbergraph_OBJ_1st_EscortTemp_delegate_Variable Temp_delegate_Variable, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_OBJ_1st_EscortK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UHealthComponentBase* K2Node_Event_healthComponent, bool K2Node_SwitchEnum_CmpSuccess, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<class ARessuplyPod> K2Node_ClassDynamicCast_AsRessuply_Pod, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ARessuplyPod* CallFunc_DropToTarget_ReturnValue, FString CallFunc_Conv_SoftClassReferenceToString_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FString CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue_1, const FExecuteUbergraph_OBJ_1st_EscortTemp_delegate_Variable_1 Temp_delegate_Variable_1, const FExecuteUbergraph_OBJ_1st_EscortTemp_delegate_Variable_2 Temp_delegate_Variable_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
