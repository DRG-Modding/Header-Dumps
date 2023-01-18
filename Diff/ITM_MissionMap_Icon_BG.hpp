#ifndef UE4SS_SDK_ITM_MissionMap_Icon_BG_HPP
#define UE4SS_SDK_ITM_MissionMap_Icon_BG_HPP

class UITM_MissionMap_Icon_BG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BlinkWarning;
    class UImage* bgB;
    class UImage* bgB_Warning;
    class UImage* bgM;
    class UImage* bgM_Warning;
    class UImage* bgT;
    class UVerticalBox* BGwindow;
    class UImage* edgeB;
    class UImage* edgeT;

    void PreConstruct(bool IsDesignTime);
    void PlayDoubleWarning();
    void ExecuteUbergraph_ITM_MissionMap_Icon_BG(int32 EntryPoint);
};

#endif
