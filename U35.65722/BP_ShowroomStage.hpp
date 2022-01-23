#ifndef UE4SS_SDK_BP_ShowroomStage_HPP
#define UE4SS_SDK_BP_ShowroomStage_HPP

class ABP_ShowroomStage_C : public AShowroomStage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight2;
    class UStaticMeshComponent* StaticMesh;

    class UTextureRenderTarget2D* CreateRenderTarget(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FIntPoint CallFunc_GetScreenResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShowroomStage(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Skysphere_HoxxesStars_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_Skysphere_HoxxesStars_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

#endif
