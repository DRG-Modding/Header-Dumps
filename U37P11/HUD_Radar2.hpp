#ifndef UE4SS_SDK_HUD_Radar2_HPP
#define UE4SS_SDK_HUD_Radar2_HPP

class UHUD_Radar2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CompassImage;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_Radar2(int32 EntryPoint);
};

#endif
