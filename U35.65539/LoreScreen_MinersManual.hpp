#ifndef UE4SS_SDK_LoreScreen_MinersManual_HPP
#define UE4SS_SDK_LoreScreen_MinersManual_HPP

class ULoreScreen_MinersManual_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_381;
    ULoreScreen_Template_C* LoreScreen_Template;
    bool IsHovering;
    UAudioComponent* HoverSound;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_LoreScreen_MinersManual(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
