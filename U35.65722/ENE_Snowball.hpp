#ifndef UE4SS_SDK_ENE_Snowball_HPP
#define UE4SS_SDK_ENE_Snowball_HPP

class AENE_Snowball_C : public AENE_Woodlouse_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ENE_Snowball(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

#endif
