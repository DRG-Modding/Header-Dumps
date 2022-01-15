#ifndef UE4SS_SDK_BP_SentryGun_MoveMarker_Heavy_HPP
#define UE4SS_SDK_BP_SentryGun_MoveMarker_Heavy_HPP

class ABP_SentryGun_MoveMarker_Heavy_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    UWidgetComponent* DistanceWidget;
    USceneComponent* DefaultSceneRoot;
    UMaterialInterface* Material;

    void UserConstructionScript(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<UMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy(int32 EntryPoint, APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, UOnScreen_SentryDistance_C* K2Node_DynamicCast_AsOn_Screen_Sentry_Distance, bool K2Node_DynamicCast_bSuccess);
}

#endif
