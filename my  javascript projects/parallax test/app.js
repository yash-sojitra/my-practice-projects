let controller = new ScrollMagic.Controller();

const tl = gsap.timeline({ defaults: { duration: 15 } });

tl.fromTo(".diamond", { top: "65%" }, { top: "-20%" });
tl.fromTo('.back', {top: '100%'}, {top: '0%'}, '-=15')

let slideScene = new ScrollMagic.Scene({
    triggerElement: 'section',
    triggerHook:0,
    duration:'75%'
})
.setPin('section')
.setTween(tl)
.addTo(controller)
