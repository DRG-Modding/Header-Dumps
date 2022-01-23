#ifndef UE4SS_SDK_BP_TextField_Screen_SeeThrough_HPP
#define UE4SS_SDK_BP_TextField_Screen_SeeThrough_HPP

class ABP_TextField_Screen_SeeThrough_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    bool ShowBG;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TextField_Screen_SeeThrough(int32 EntryPoint, FText CallFunc_TextToUpper_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTextField_SeeThrough_C* K2Node_DynamicCast_AsText_Field_See_Through, bool K2Node_DynamicCast_bSuccess);
};

#endif
