#ifndef UE4SS_SDK_BP_CabinOwnerSign_HPP
#define UE4SS_SDK_BP_CabinOwnerSign_HPP

class ABP_CabinOwnerSign_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh2;
    UWidgetComponent* NameWidget;
    UStaticMeshComponent* Lamp;
    USceneComponent* DefaultSceneRoot;

    void SetPlayerName(FText& Value, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name, bool K2Node_DynamicCast_bSuccess);
    void UserConstructionScript();
    void SetCabinOwner(UFSDPlayerState* PlayerState);
    void ChangeName(FString NewName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CabinOwnerSign(int32 EntryPoint, FString K2Node_CustomEvent_NewName, FLinearColor CallFunc_GetLightColor_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FLinearColor CallFunc_Multiply_LinearColorFloat_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_GetLightColor_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UWidgetCabinPlayerName_C* K2Node_DynamicCast_AsWidget_Cabin_Player_Name_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
