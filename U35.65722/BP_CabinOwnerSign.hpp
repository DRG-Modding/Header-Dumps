#ifndef UE4SS_SDK_BP_CabinOwnerSign_HPP
#define UE4SS_SDK_BP_CabinOwnerSign_HPP

class ABP_CabinOwnerSign_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh2;
    class UWidgetComponent* NameWidget;
    class UStaticMeshComponent* Lamp;
    class USceneComponent* DefaultSceneRoot;

    void SetPlayerName(FText& Value, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name, bool K2Node_DynamicCast_bSuccess);
    void UserConstructionScript();
    void SetCabinOwner(class AFSDPlayerState* PlayerState);
    void ChangeName(FString NewName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CabinOwnerSign(int32 EntryPoint, FString K2Node_CustomEvent_NewName, FLinearColor CallFunc_GetLightColor_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FLinearColor CallFunc_Multiply_LinearColorFloat_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_BP_CabinOwnerSignK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_GetLightColor_ReturnValue_2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
