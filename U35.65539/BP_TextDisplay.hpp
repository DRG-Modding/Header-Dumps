#ifndef UE4SS_SDK_BP_TextDisplay_HPP
#define UE4SS_SDK_BP_TextDisplay_HPP

class ABP_TextDisplay_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    USceneComponent* Scene;
    FText Text;
    FSlateFontInfo NewVar_0;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TextDisplay(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UWidget_TextDisplay_C* K2Node_DynamicCast_AsWidget_Text_Display, bool K2Node_DynamicCast_bSuccess);
}

#endif
