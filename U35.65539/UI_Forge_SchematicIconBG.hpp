#ifndef UE4SS_SDK_UI_Forge_SchematicIconBG_HPP
#define UE4SS_SDK_UI_Forge_SchematicIconBG_HPP

class UUI_Forge_SchematicIconBG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_Outside;
    UBorder* BorderBG;
    UImage* Shadow;
    USizeBox* SizeBox_0;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_SchematicIconBG(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
