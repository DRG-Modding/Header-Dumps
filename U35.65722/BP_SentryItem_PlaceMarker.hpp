#ifndef UE4SS_SDK_BP_SentryItem_PlaceMarker_HPP
#define UE4SS_SDK_BP_SentryItem_PlaceMarker_HPP

class ABP_SentryItem_PlaceMarker_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Scene;
    class UStaticMeshComponent* RightLine;
    class UStaticMeshComponent* LeftLine;
    class USceneComponent* AimScene;
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FName ColorName;
    FLinearColor ValidColor;
    class ARecallableSentryGunItem* Item;

    void SetAngleRestriction(float AngleRestriction, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, FRotator CallFunc_MakeRotator_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_2, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic*& DynamicMaterial, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_SetMaterials_DynamicMaterial);
    void ReceiveBeginPlay();
    void OnMarkerValidChanged(bool Valid);
    void ExecuteUbergraph_BP_SentryItem_PlaceMarker(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool K2Node_Event_Valid, class AActor* CallFunc_GetOwner_ReturnValue, FLinearColor K2Node_Select_Default, class ARecallableSentryGunItem* K2Node_DynamicCast_AsRecallable_Sentry_Gun_Item, bool K2Node_DynamicCast_bSuccess);
};

#endif
