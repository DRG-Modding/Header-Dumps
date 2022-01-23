#ifndef UE4SS_SDK_ITM_MisSel_ZoneImage_HPP
#define UE4SS_SDK_ITM_MisSel_ZoneImage_HPP

class UITM_MisSel_ZoneImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ZoneImage;
    FSlateBrush Image;
    FVector2D ZoneCenter;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_ZoneImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
