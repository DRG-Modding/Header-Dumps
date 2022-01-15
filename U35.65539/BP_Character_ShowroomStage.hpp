#ifndef UE4SS_SDK_BP_Character_ShowroomStage_HPP
#define UE4SS_SDK_BP_Character_ShowroomStage_HPP

class ABP_Character_ShowroomStage_C : AShowroomStage
{
    FPointerToUberGraphFrame UberGraphFrame;
    UShowroomSceneCaptureComponent* Capture_SeasonsMenu;
    UShowroomSceneCaptureComponent* Capture_EscapeMenu;
    USpotLightComponent* SpotLight2;
    UCameraComponent* Camera;
    USpotLightComponent* SpotLight;
    USpotLightComponent* SpotLight1;
    USkeletalMeshComponent* PreviewMesh;

    void UpdateActorsToHide(TArray<AActor*> ActorsToHide, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<ABP_Skysphere_HoxxesStars_C*>& CallFunc_GetAllActorsOfClass_OutActors, ABP_Skysphere_HoxxesStars_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    UTextureRenderTarget2D* CreateRenderTarget(float CallFunc_Divide_FloatFloat_ReturnValue, USceneCaptureComponent2D* CallFunc_GetActiveCaptureComponent_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FIntPoint CallFunc_GetScreenResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Character_ShowroomStage(int32 EntryPoint);
}

#endif
