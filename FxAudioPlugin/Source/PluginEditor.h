/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class FxAudioPluginAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                            private juce::Slider::Listener
{
public:
    FxAudioPluginAudioProcessorEditor (FxAudioPluginAudioProcessor&);
    ~FxAudioPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
private:
    void sliderValueChanged(juce::Slider* slider) override;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FxAudioPluginAudioProcessor& audioProcessor;

    juce::Slider midiVolume;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FxAudioPluginAudioProcessorEditor)
};
